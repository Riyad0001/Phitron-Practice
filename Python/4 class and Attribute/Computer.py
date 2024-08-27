class CPU:
    def __init__(self,cores):
        self.cores=cores

class RAM:
    def __init__(self,speed):
        self.speed=speed
class HardDisk:
    def __init__(self,size):
        self.size=size

class Computer:
    def __init__(self,c_core,ram_speed,H_size):
        self.coreee=CPU(c_core)
        self.speeed=RAM(ram_speed)
        self.sizee=HardDisk(H_size)


mac=Computer(3,2200,"2TB")