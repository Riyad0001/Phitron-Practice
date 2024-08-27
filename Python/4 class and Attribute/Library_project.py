# class Book:
#     def __init__(self,cat,id,name,quantity):
#         self.id=id
#         self.name=name
#         self.cat=cat
#         self.quantity=quantity

# class User:
#     def __init__(self,id,name,password):
#         self.id=id
#         self.name=name
#         self.password=password
#         self.borrowedBooks=[]
# class Library:
#     def __init__(self,owner,name):
#         self.owner=owner
#         self.name=name
#         self.books=[]
#         self.users=[]
#     def addBook(self,cat,id,name,quantity):
#         book=Book(cat,id,name,quantity)
#         self.books.append(book)
#         print(f"\n\t{name} Book added !")
#     def addUser(self,id,name,password):
#         user=User(id,name,password)
#         self.users.append(user)
#         return user
#     def borrowBook(self,user,id):
#         for book in books:
#             if book.id==id:
#                 if book in user.borrowedBooks:
#                     print("Already Borrowed")
#                     return
#                 elif book.quantity<1:
#                     print("\n Not Available Copies")
#                     return
#                 else:
#                      user.borrowedBooks.append(book)
#                      book.quantity-=1
#                      print(f"\n\t {book.name} borrowed Succesfully")
#                      return
#         print("Book Not Find")

# p1=Library("Ryaan X Riyad","Riyad boi Ghor")
# admin=p1.addUser(1,"Fatema",'admin')
# rahim=p1.addUser(40,"Munni",7703)
# pybook=p1.addBook('Sci-Fi',12,'Fakibahi',5)

# # run=True
# # currentUser=admin
# # while run:
# #     if currentUser==None:
# #         print('\n No logged in User')

# #         option=input("Login ? Registration (L/R): ")

# #         if option=='R':
# #             id=int(input("\tEnter id: "))
# #             name=input("\tEnter Name: ")
# #             password=input("\tEnter Password: ")

# #             user=p1.addUser(id,name,password)
# #             currentUser=user
# #         elif option=='L':
# #             id=int(input("\tEnter id: "))
# #             password=input("\tEnter Password: ")

# #             math=False
# #             for user in p1.users:
# #                 if user.id==id and user.password==password:
# #                     currentUser=user
# #                     math=True
# #                     break
# #             if math==False:
# #                 print("\n\tNo user found ! ")

# #         else:

# #             if currentUser.name=='admin':

# #                 print("Options: \n")
# #                 print("1 : Add Book")
# #                 print("2 : Show Users")
# #                 print("3 : Show Books")
# #                 print("4 : Logout")

# #                 ch=int(input("\nEnter Option: "))

# #                 if ch==1:
# #                     cat=input("\tEnter Cat: ")
# #                     id=int(input("\tEnter id: "))
# #                     name=input("\tEnter Name: ")
# #                     qun=int(input("\tEnter quantity: "))

# #                     p1.addBook(cat,id,name,qun)
# #                 elif ch==4:
# #                     currentUser=None

# #             else:
# #                 print("Options: \n")
# #                 print("1 : Borrow Book")
# #                 print("2 : Return Book")
# #                 print("3 : Show Books")
# #                 print("4 : Show Borrowed Books")
# #                 print("5 : Show Returned Books")
# #                 print("6 : Logout")

# #                 ch=int(input("\nEnter Option: "))

# #                 if ch==1:
# #                     id=int(input("\tEnter id: "))
# #                     p1.borrowBook(currentUser)

# run = True
# currentUser = admin
# while run:
#     if currentUser is None:
#         print('\nNo logged in User')

#         option = input("Login ? Registration (L/R): ")

#         if option == 'R':
#             id = int(input("\tEnter id: "))
#             name = input("\tEnter Name: ")
#             password = input("\tEnter Password: ")

#             user = p1.addUser(id, name, password)
#             currentUser = user
#         elif option == 'L':
#             id = int(input("\tEnter id: "))
#             password = input("\tEnter Password: ")

#             found = False
#             for user in p1.users:
#                 if user.id == id and user.password == password:
#                     currentUser = user
#                     found = True
#                     break
#             if not found:
#                 print("\nNo user found!")

#         else:
#             if currentUser.name == 'admin':
#                 print("Options: \n")
#                 print("1: Add Book")
#                 print("2: Show Users")
#                 print("3: Show Books")
#                 print("4: Logout")

#                 ch = int(input("\nEnter Option: "))

#                 if ch == 1:
#                     cat = input("\tEnter Cat: ")
#                     id = int(input("\tEnter id: "))
#                     name = input("\tEnter Name: ")
#                     qun = int(input("\tEnter quantity: "))

#                     p1.addBook(cat, id, name, qun)
#                     print("\nOptions: \n")  # Added this line
#                     print("1: Add Book")  # Added this line
#                     print("2: Show Users")  # Added this line
#                     print("3: Show Books")  # Added this line
#                     print("4: Logout")  # Added this line
#                 elif ch == 2:
#                     p1.showUsers()
#                 elif ch == 3:
#                     p1.showBooks()
#                 elif ch == 4:
#                     currentUser = None
#                 else:
#                     print("Invalid Option!")

#             else:
#                 print("Options: \n")
#                 print("1: Borrow Book")
#                 print("2: Return Book")
#                 print("3: Show Books")
#                 print("4: Show Borrowed Books")
#                 print("5: Show Returned Books")
#                 print("6: Logout")

#                 ch = int(input("\nEnter Option: "))

#                 if ch == 1:
#                     id = int(input("\tEnter id: "))
#                     p1.borrowBook(currentUser, id)






class Book:
    def __init__(self, cat, id, name, quantity):
        self.id = id
        self.name = name
        self.cat = cat
        self.quantity = quantity

class User:
    def __init__(self, id, name, password):
        self.id = id
        self.name = name
        self.password = password
        self.borrowedBooks = []

class Library:
    def __init__(self, owner, name):
        self.owner = owner
        self.name = name
        self.books = []
        self.users = []

    def addBook(self, cat, id, name, quantity):
        existing_book = next((book for book in self.books if book.id == id), None)
        if existing_book:
            print(f"\nBook with ID {id} already exists.")
        else:
            book = Book(cat, id, name, quantity)
            self.books.append(book)
            print(f"\n{name} Book added!")
            print("Options: \n")
            print("1: Add Book")
            print("2: Show Users")
            print("3: Show Books")
            print("4: Logout")

    def addUser(self, id, name, password):
        user = User(id, name, password)
        self.users.append(user)
        return user

    def borrowBook(self, user, book_id):
        book = next((book for book in self.books if book.id == book_id), None)
        if book:
            if book in user.borrowedBooks:
                print("Already Borrowed")
            elif book.quantity < 1:
                print("\nNot Available Copies")
            else:
                user.borrowedBooks.append(book)
                book.quantity -= 1
                print(f"\n{book.name} borrowed successfully")
        else:
            print("Book Not Found")

    def showUsers(self):
        print("\nUsers:")
        for user in self.users:
            print(f"ID: {user.id}, Name: {user.name}")

    def showBooks(self):
        print("\nBooks:")
        for book in self.books:
            print(f"ID: {book.id}, Name: {book.name}, Quantity: {book.quantity}")

# Your existing code
p1 = Library("Ryaan X Riyad", "Riyad boi Ghor")
admin = p1.addUser(1, "Fatema", 'admin')
rahim = p1.addUser(40, "Munni", 7703)
pybook = p1.addBook('Sci-Fi', 12, 'Fakibahi', 5)

run = True
currentUser = admin
while run:
    if currentUser is None:
        print('\nNo logged in User')

        option = input("Login ? Registration (L/R): ")

        if option == 'R':
            id = int(input("\tEnter id: "))
            name = input("\tEnter Name: ")
            password = input("\tEnter Password: ")

            user = p1.addUser(id, name, password)
            currentUser = user
        elif option == 'L':
            id = int(input("\tEnter id: "))
            password = input("\tEnter Password: ")

            found = False
            for user in p1.users:
                if user.id == id and user.password == password:
                    currentUser = user
                    found = True
                    break
            if not found:
                print("\nNo user found!")

        else:
            if currentUser.name == 'admin':
                print("Options: \n")
                print("1: Add Book")
                print("2: Show Users")
                print("3: Show Books")
                print("4: Logout")

                ch = int(input("\nEnter Option: "))

                if ch == 1:
                    cat = input("\tEnter Cat: ")
                    id = int(input("\tEnter id: "))
                    name = input("\tEnter Name: ")
                    qun = int(input("\tEnter quantity: "))

                    p1.addBook(cat, id, name, qun)
                elif ch == 2:
                    p1.showUsers()
                elif ch == 3:
                    p1.showBooks()
                elif ch == 4:
                    currentUser = None
                else:
                    print("Invalid Option!")

            else:
                print("Options: \n")
                print("1: Borrow Book")
                print("2: Return Book")
                print("3: Show Books")
                print("4: Show Borrowed Books")
                print("5: Show Returned Books")
                print("6: Logout")

                ch = int(input("\nEnter Option: "))

                if ch == 1:
                    id = int(input("\tEnter id: "))
                    p1.borrowBook(currentUser, id)
