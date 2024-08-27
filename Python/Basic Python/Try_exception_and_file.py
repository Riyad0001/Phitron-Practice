try:
    l=45/6
except:
    print('Error happened')
finally:
    print('finaly here')
print('Done')

# with open('message.txt', 'w') as file:
#     file.write('I love Pythonnnnn')

# with open('message.txt', 'w') as file:
#     file.write('I love Pythonnnnn')


with open('message.txt', 'r') as file:
    text=file.read()
    print(text)
