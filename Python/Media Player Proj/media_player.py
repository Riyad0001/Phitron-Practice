from abc import ABC,abstractmethod

class Description:
    def __init__(self,description):
        self.__description=description

    def get_description(self):
        return self.__description

class Media(ABC):
    def __init__(self,title,duration):
        self.title=title
        self.duration=duration

    @abstractmethod
    def play(self):
        pass

class Music(Media,Description):
    def __init__(self,title,duration,description):
        Media.__init__(self,title,duration)
        Description.__init__(self,description)

    def play(self):
        print(f"Playing Music: {self.title}")

    def info(self):
        print(f"Title: {self.title} duration {self.duration} {self.get_description()}")

class Video(Media,Description):
    def __init__(self,title,duration,description):
        Media.__init__(self,title,duration)
        Description.__init__(self,description)

    def play(self):
        print(f"Playing Video: {self.title}")

    def info(self):
        print(f"Title: {self.title} duration {self.duration} {self.get_description()}")

class AudioBook(Media,Description):
    def __init__(self,title,duration,description):
        Media.__init__(self,title,duration)
        Description.__init__(self,description)

    def play(self):
        print(f"Playing AudioBook: {self.title}")

    def info(self):
        print(f"Title: {self.title} duration {self.duration} {self.get_description()}")

class Library:
    def __init__(self):
        self.__media_items=[]
        self.__media_by_genre={}
        self.__genre=""

    def get_media_items(self):
        return self.__media_items

    def get_media_by_genre(self):
        return self.__media_by_genre

    def add_media(self,media):
        if isinstance(media,Music):
            self.__genre="Music"
        if isinstance(media,Video):
            self.__genre="Video"
        if isinstance(media,AudioBook):
            self.__genre="AudioBook"
        self.__media_items.append(media)

        if self.__genre in self.__media_by_genre:
            self.__media_by_genre[self.__genre].append(media)
        else:
            self.__media_by_genre[self.__genre]=[media,]

class User(ABC):
    def __init__(self,name):
        self.__name=name

    @abstractmethod
    def play_media(self):
        pass

class FreeUser(User):
    def __init__(self,name):
        super().__init__(name)

    def play_media(self,library):
        for media in library.get_media_items():
            media.play()


class PremiumUser(User):
    def __init__(self,name):
        super().__init__(name)
        self.__favorite_genre=""

    def set_favorite_genre(self,genre):
        self.__favorite_genre=genre

    def get_favorite_genre(self,genre):
        return self.__favorite_genre

    def play_media(self,library):
        if self.__favorite_genre in library.get_media_by_genre():
            for media in library.get_media_by_genre()[self.__favorite_genre]:
                media.play()
        else:
            print("Invalid Genre SElected")

        

    
library=Library()
mus=Music("Amr Dehokhana",'4.05',"Author : Odd Signature")
mus1=Music("Amr Dehokhana 2",'7.05',"Author : Odd ASES")
vid=Video("Video Trac 1","20:44","Author : T- Series")
audi1=AudioBook("AudioBook 1","50:55","Author : Kindle")
library.add_media(mus)
library.add_media(mus1)
library.add_media(audi1)
library.add_media(vid)

free_user=FreeUser("Riyad")
prem_user=PremiumUser("Prince")

prem_user.set_favorite_genre("Video")

prem_user.play_media(library)

# free_user.play_media(library)
# mus.play()

    
