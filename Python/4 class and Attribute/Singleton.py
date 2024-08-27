class Singleton:
    __instance=None
    def __init__(self):
        if Singleton.__instance is None:
            Singleton.__instance=self
        else:
            raise Exception('This is Singleton.Already have an instance,use that one by calling get_instance method')
    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance

fist=Singleton.get_instance()
sec=Singleton.get_instance()
thi=Singleton.get_instance()

print(fist)
print(sec)
print(thi)
last=Singleton()


