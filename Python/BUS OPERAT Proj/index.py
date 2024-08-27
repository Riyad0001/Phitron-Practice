from abc import ABC,abstractmethod
class AbstractBus(ABC):
    def __init__(self,coach,driver,arraival,departure,from_des,to):
        self.coach=coach
        self.driver=driver
        self.arraival=arraival
        self.departure=departure
        self.from_des=from_des
        self.to=to
        self.seats=["Empty" for _ in range(20)]

    # @abstractmethod
    # def install_bus(self,coach,driver,arraival,departure,from_des,to):
    #     pass
    # @abstractmethod
    # def display_available_bus(self):
    #     pass
    # @abstractmethod
    # def display_seat_status(self):
    #     pass

class Bus(AbstractBus):
    pass

class BusCompany:
    def __init__(self):
        self.buses={} #sokol bus er details thkbe

    def install_bus(self,bus):
        print(f"Bus {bus.coach} added successfully")
        self.buses[bus.coach]=bus

    def display_available_buses(self):
        if not self.buses:
            print("No bus are available!!")
        else:
            print(f"Coach\tDriver\t\tArrival\tDeparture\tFrom\t\tTo")
            for coach,bus in self.buses.items():
                print(f"{coach}\t{bus.driver}\t{bus.arraival}\t{bus.departure}\t\t{bus.from_des}\t{bus.to}")

    def book_ticket(self,coach,seat):
        if coach in self.buses:
            if 1<=seat<=20:
                if self.buses[coach].seats[seat-1]=='Empty':
                    print("Seat Booked Succesfully!")
                    self.buses[coach].seats[seat-1]='Booked'
                else:
                    print("Seat already booked!!")
            else:
                print("Invalid Seat Number.")
        else:
            print("Invalid Coach Number")

    def display_seat_status(self,coach):
        if coach in self.buses:
            print(self.buses[coach].seats)
        else:
            print("Invalid Coach")

ena=BusCompany()

while True:
    print("Welcome to Bus Ticket Booking System!!")
    print("1. Install Bus")
    print("2. View Available Buses")    
    print("3. Book Ticket")
    print("4. Check Seat Status")
    print("5. Exit")
    ch=int(input("Enter your Choice : "))

    if ch==1:
        coach=input("Enter Bus Number : ")
        Dri=input("Enter Driver Name : ")    
        ari=input("Enter Bus Arrival Time : ")    
        dep=input("Enter Bus Departure Time : ") 
        frm=input("Enter LOcation to Start Journy : ")
        to=input("Enter Destination : ")
        bas=Bus(coach,Dri,ari,dep,frm,to)
        ena.install_bus(bas)
    elif ch==2:
        ena.display_available_buses()
    elif ch==3:
        coach=input("Enter Bus Number : ")
        tic=int(input("Enter Seat Number : "))

        ena.book_ticket(coach,tic)

    elif ch==4:
        chc=input("Enter Coach Number : ")
        ena.display_seat_status(chc)
    elif ch==5:
        print("Thanks for Using our Service!!")
        break
    else:
        print("Invalid Input")








