
sentence = input()
hashmap = {'a': '@', 'b':'8', 'c':'(',
            'd':'|)', 'e':'3', 'f':'#', 'g':'6',
           'h':'[-]', 'i':'|', 'j':'_|', 'k':'|<',
           'l':'1', 'm':"[]\\/[]", 'n':"[]\\[]", 'o':'0',
           'p':'|D', 'q':'(,)', 'r':'|Z', 's':'$', 't':"']['",
           'u':'|_|', 'v':"\\/", 'w':"\\/\\/", 'x':'}{', 'y':'`/', 'z':'2'}
# print(sentence)
newsentence = ""
for c in sentence:
    if c.lower() in hashmap:
        newsentence += hashmap[c.lower()]
    else:
        newsentence += c
print(newsentence)


testcase1 = "@11 `/0|_||Z 8@$3 @|Z3 8310[]\\[]6 ']['0 |_|$."
testcase2 = "\\/\\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\\[](`/, |<3[]\\[][]\\[]3']['[-]?"
testcase3 = "@ []\\[]3\\/\\/ @1|D[-]@83']['!"

if newsentence == testcase3:
    print("same")

