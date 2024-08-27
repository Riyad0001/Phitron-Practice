class calculator:
    Brand="Casioo 777"
    def sel(self,num1,num2):
        return num1*num2
    def send_sms(self,phone,sms):
        text=f"Sending smds: {phone} and msg is: {sms}"
        return text
    def deducr(self,n,m):
        return n-m
    def divid(self,m,n):
        return m/n


res=calculator()
print(res.sel(2,4))
print(res.send_sms(656756,"I love u"))
print(res.deducr(10,5))
print(res.divid(25,5))