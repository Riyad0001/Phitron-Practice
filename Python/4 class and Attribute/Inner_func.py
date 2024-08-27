def double_decer():
    print("Double decer run")
    def inner_f():
        print("Inside the inner")
        return 45
    return inner_f


# print(double_decer()())

def do_sa(wak):
    print('Work satrt')
    # print(f"Wark is {wak}")
    wak()
    print("work end")

# do_sa('Fuckinggggg')

def lol():
    print("Coading in py")

do_sa(lol)