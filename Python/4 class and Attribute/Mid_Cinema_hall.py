class Star_Cinema:
    hall_list=[]

    def hall_list(self,hall):
        self.hall_list.append(hall)

class Hall(Star_Cinema):
    def __init__(self,rows,colam,hall_no):
        self._seats={}
        self._show_list=[]
        self.rows=rows
        self.colam=colam
        self._hall_no=hall_no

    def hall_no(self):
        return self._hall_no

    def entry_show(self,show_id,movie_name,time):
        show=(show_id,movie_name,time)
        self._show_list.append(show)

        self._seats[show_id]=[['0' for i in range(self.colam)] for i in range(self.rows)]

    def book_seats(self,show_id,seat_list):
        if show_id not in self._seats:
            print("Invalid Show Id.")
            return

        for row,clm in seat_list:
            if row>=self.rows or clm >=self.colam or row<0 or clm<0:
                print(f'Invalid seat Position: ({row},{clm})')
                continue

            if self._seats[show_id][row][clm]=='X':
                print(f'seat at position ({row},{clm}) is already booked.')
                continue
            self._seats[show_id][row][clm]='X'
    def view_show_list(self):
        for show in self._show_list:
            print(f'Id: {show[0]},Movie: {show[1]},Time: {show[2]}')
    
    def view_available_seats(self,show_id):
        if show_id not in self._seats:
            print('Invalid show Id')
            return
        seats=self._seats[show_id]
        for row_ind,row in enumerate(seats):
            for col_ind,seats in enumerate(row):
                print(f'Seat ({row_ind},{col_ind}): {'Availablee' if seats=='0' else 'Boked'}')

#Examplee

# halll=Hall(5,5,"Hall 01")
# halll.entry_show(101,"Jawan Majhi",'6:00')
# halll.entry_show(107,"3 Ediots",'21:00')

# halll.view_show_list()
# halll.book_seats(101,[(2,2),(3,3)])
# halll.view_available_seats(101)

# try:
#     halll.book_seats(101, [(1, 1)]) 
# except:
#     print('Error happened')

# try:
#     halll.book_seats(101, [(4, 4)])
# except:
#     print('Error happened')

# try:
#     halll.book_seats(101, [(1, 1)])
# except:
#     print('Error happened')
class User:
    def __init__(self, user_id, name, password):
        self.user_id = user_id
        self.name = name
        self.password = password

class Cinema:
    def __init__(self):
        self.users = []
        self.current_user = None

    def add_user(self, user_id, name, password):
        user = User(user_id, name, password)
        self.users.append(user)
        return user

    def login(self, user_id, password):
        for user in self.users:
            if user.user_id == user_id and user.password == password:
                self.current_user = user
                return True
        return False

    def logout(self):
        self.current_user = None

# Extending the existing Star_Cinema and Hall classes with added functionalities

class Star_Cinema_Extended(Star_Cinema):
    def __init__(self):
        super().__init__()

    def add_hall(self, hall):
        self.hall_list.append(hall)

# Example usage
cinema = Cinema()
admin = cinema.add_user(0, 'admin', 'admin')
hall1 = Hall(5, 5, "Hall 01")
hall1.entry_show(101, "Jawan Majhi", '6:00')
hall1.entry_show(107, "3 Idiots", '21:00')

star_cinema = Star_Cinema_Extended()
star_cinema.add_hall(hall1)

run = True

while run:
    if cinema.current_user is None:
        print('\nNo logged in user')

        option = input("Login or Registration (L/R): ")

        if option == 'R':
            user_id = int(input("\tEnter ID: "))
            name = input("\tEnter Name: ")
            password = input("\tEnter Password: ")

            cinema.current_user = cinema.add_user(user_id, name, password)
        elif option == 'L':
            user_id = int(input("\tEnter ID: "))
            password = input("\tEnter Password: ")

            if cinema.login(user_id, password):
                print("Login successful!")
            else:
                print("\nNo user found!")

    else:
        if cinema.current_user.name == 'admin':
            print("Options:\n")
            print("1: Add Show")
            print("2: Show Users")
            print("3: Show Halls")
            print("4: Logout")

            choice = int(input("\nEnter Option: "))

            if choice == 1:
                show_id = int(input("\tEnter Show ID: "))
                movie_name = input("\tEnter Movie Name: ")
                time = input("\tEnter Show Time: ")

                hall1.entry_show(show_id, movie_name, time)
            elif choice == 2:
                for user in cinema.users:
                    print(f'ID: {user.user_id}, Name: {user.name}')
            elif choice == 3:
                hall1.view_show_list()
            elif choice == 4:
                cinema.logout()
            else:
                print("Invalid Option!")

        else:
            print("Options:\n")
            print("1: Book Seat")
            print("2: View Shows")
            print("3: View Available Seats")
            print("4: Logout")

            choice = int(input("\nEnter Option: "))

            if choice == 1:
                show_id = int(input("\tEnter Show ID: "))
                seat_list = []
                while True:
                    row = int(input("\tEnter Row: "))
                    col = int(input("\tEnter Column: "))
                    seat_list.append((row, col))
                    more = input("\tAdd more seats? (y/n): ")
                    if more.lower() != 'y':
                        break
                hall1.book_seats(show_id, seat_list)
            elif choice == 2:
                hall1.view_show_list()
            elif choice == 3:
                show_id = int(input("\tEnter Show ID: "))
                hall1.view_available_seats(show_id)
            elif choice == 4:
                cinema.logout()
            else:
                print("Invalid Option!")

