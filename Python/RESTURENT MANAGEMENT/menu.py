class Menu:
    def __init__(self):
        self.items=[] #items er database

    def add_menu_item(self,item):
        self.items.append(item)
    def find_item(self,item_name):
        for itm in self.items:
            if itm.name.lower()==item_name.lower():
                return itm
            return None

    def remove_item(self,item_name):
        item=self.find_item(item_name)
        if item:
            self.items.remove(item)
            print('Item Deleted')
        else:
            print('Item Not found')

    def show_menu(self):
        print("***Menu***")
        print('Name\tPrice\tQuantity')
        for itm in self.items:
            print(f'{itm.name}\t{itm.price}\t{itm.quantity}')