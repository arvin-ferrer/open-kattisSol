
n = int(input())
sentence = list(map(str, input().split()))
print(sentence)
for word in range(len(sentence)):
    new = sentence[word][0] 
    for l in range(1, len(sentence[word])):
        if sentence[word][l] != sentence[word][l - 1]:
            new += sentence[word][l]
    sentence[word] = new
    new1 = ""
    for letter in range(len(sentence[word])):
        if sentence[word][letter] not in "aeiou" or letter == 0 or letter == len(sentence[word])-1:
            new1 += sentence[word][letter]
    sentence[word] = new1

for i in sentence:
    print(i, end = ' ')
