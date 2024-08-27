import random

class MainBank:
    def __init__(self):
        self.users={}
        self.total_bal=0
        self.total_loan_amou=0
        self.loan_enable=True

    def add_user(self,user):
        self.users[user.account_number]=user

    def remove_user(self,account_num):
        if account_num in self.users:
            del self.users[account_num]
    
    def get_total_balenci(self):
        return self.total_bal

    def get_total_loan_ammou(self):
        return self.total_loan_amou

    def onn_loan(self):
        self.loan_enable=not self.loan_enable


class User:
    def __init__(self,name,email,address,account_type):
        self.name=name
        self.email=email
        self.address=address
        self.account_type=account_type
        self.balance=0
        self.account_number=str(random.randint(4500,9000))
        self.trsaction_histry=[]
        self.count_loan=0

    def deposite(self,ammount):
        self.balance+=ammount
        self.trsaction_histry.append(f"Deposite : {ammount}")

    def withdraw(self,ammount):
        if ammount<=self.balance:
            self.balance-=ammount
            self.trsaction_histry.append(f"Withdraw : {ammount}")
            print(f"Tk {ammount} withdraw Successfully")
        else:
            print("Withdraw ammount is Over")

    def check_balance(self):
        return self.balance

    def trsaction_histry_view(self):
        return self.trsaction_histry

    def take_loan(self,ammount):
        if self.count_loan >2:
            print("Loan Limit Exceded")
            return
        if mainbank.loan_enable==False:
            print("Loan is Disabled.Contract Manager!")
            return
        self.balance+=ammount
        self.count_loan+=1
        mainbank.total_loan_amou+=ammount
        self.trsaction_histry.append(f"Loan Taken : {ammount}")

    def transfer_tk(self,ammount,recipt_account_num):
        if ammount>self.balance:
            print("Insufficient Balance")
            return
        if recipt_account_num not in mainbank.users:
            print("Account does not Exist")
            return
        self.balance-=ammount
        mainbank.users[recipt_account_num].balance+=ammount
        self.trsaction_histry.append(f"Transfared : {ammount} to {recipt_account_num}")
        mainbank.users[recipt_account_num].trsaction_histry.append(f"Recived {ammount} from {self.account_number}")

    
class Admin:
    def __init__(self,name):
        self.name=name

    def creat_account(self,name,email,address,account_type):
        new_user=User(name,email,address,account_type)
        mainbank.add_user(new_user)
        return new_user.account_number

    def delete_account(self,account_num):
        mainbank.remove_user(account_num)

    def list_all_accounts(self):
        return list(mainbank.users.keys())

    def check_total_balance(self):
        total_bal=sum( user.balance for user in mainbank.users.values())
        print(f"Total Balance {total_bal}")

    def check_total_loan_tk(self):
        return mainbank.total_loan_amou

    def onn_off_user_loan(self):
        mainbank.onn_loan()


mainbank=MainBank()

# admin=Admin("Manager")


# acc1=admin.creat_account("gfvhg","fgfvg","Mirpur","Sabing")
# acc2=admin.creat_account("gfvyg","fgfvg","Notun","Current")




def bank_user_menu():
    account_number = input("Enter Your Account Number: ")
    if account_number not in mainbank.users:
        print("Account does not exis!")
        return

    bank_user = mainbank.users[account_number]

    while True:
        print(f"\nWelcome {bank_user.name}")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. View Transaction History")
        print("5. Take Loan")
        print("6. Transfer Money")
        print("7. Exit")

        ch = int(input("Enter your Choice: "))
        if ch == 1:
            amount = int(input("Enter Amount to Deposit: "))
            bank_user.deposite(amount)
        elif ch == 2:
            amount = int(input("Enter Amount to Withdraw: "))
            bank_user.withdraw(amount)
        elif ch == 3:
            print(f"Your Balance: {bank_user.check_balance()}")
        elif ch == 4:
            print("Transaction History:")
            print(bank_user.trsaction_histry)
        elif ch == 5:
            amount = int(input("Enter Loan Tk: "))
            bank_user.take_loan(amount)
        elif ch == 6:
            amount = int(input("Enter Tk to Transfer: "))
            receipt_account_num = input("Enter Recipient Account Number: ")
            bank_user.transfer_tk(amount, receipt_account_num)
        elif ch == 7:
            break
        else:
            print("Invalid Choice")


def admin_menu():
    name = input("Enter Your Name: ")
    admin = Admin(name)

    while True:
        print(f"**\nWelcome {admin.name}**")
        print("1. Create New Account")
        print("2. Delete Account")
        print("3. List All Accounts")
        print("4. Check Total Balance")
        print("5. Check Total Loan Amount")
        print("6. Enable Loan Feature")
        print("7. Exit")

        ch = int(input("Enter your Choice: "))
        if ch == 1:
            name = input("Enter bank_user Name: ")
            email = input("Enter bank_user Email: ")
            address = input("Enter bank_user Address: ")
            account_type = input("Enter Account Type : ")
            acc_number = admin.creat_account(name, email, address, account_type)
            print(f"Account created successfully!! Account Number: {acc_number}")
        elif ch == 2:
            account_num = input("Enter Account Number to Delete: ")
            admin.delete_account(account_num)
            print(f"Account {account_num} deleted success!")
        elif ch == 3:

            accounts = admin.list_all_accounts()
            print("All Accounts:")
            for acc in accounts:
                print("Account num: ",acc)
        elif ch == 4:
            admin.check_total_balance()
        elif ch == 5:
            print(f"Total Loan Amount: {admin.check_total_loan_tk()}")
        elif ch == 6:
            admin.onn_off_user_loan()
        elif ch == 7:
            break
        else:
            print("Invalid Choice")




while True:
    print("**** Welcome to the Bank ****")
    print("1. Customer")
    print("2. Bank Admin")
    print("3. Exit")
    x = int(input("Enter Your Choice: "))
    if x == 1:
        bank_user_menu()
    elif x == 2:
        admin_menu()
    elif x == 3:
        break
    else:
        print("Invalid Option.")