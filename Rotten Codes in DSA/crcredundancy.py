def bin2dec(bin):
    dec=0
    for i in range(len(bin)-1,-1,-1):
        dec=dec+pow(2,len(bin)-1-i)*bin[i]
    return dec
def dec2bin(dec):
    binary=[]
    while(dec!=0):
        carry=dec%2 
        binary.append(carry)
        dec=dec//2
    binary.reverse()
    return binary
        
def mod2div(datas,divisors):
    div_len=len(divisors)
    data_len=len(datas)
    pointer=0
    div_b=bin2dec(divisors)
    data_a=[]
    flag=0
    while(pointer!=data_len):
        for i in range(len(data_a),div_len):
            if pointer==data_len:
                flag=1
                break
            data_a.append(datas[pointer])
            pointer=pointer+1 
        if flag==1:
            return data_a
        data_b=bin2dec(data_a)
        data_xor=data_b^div_b
        data_a=dec2bin(data_xor)
    return data_a

def sender(data,divisor):
    for i in range(0,len(divisor)-1):
        data.append(0)
    remainder=mod2div(data,divisor)
    encoded=data
    for i in range(0,len(remainder)):
        encoded[len(encoded)-len(remainder)+i]=remainder[i]
    return encoded

def receiver(data,divisor):
    remainder=mod2div(data,divisor)
    return remainder
    
output_remainder=receiver(sender([1,1,0,1,0,1,1,0,1,1],[1,0,0,1,1]),[1,0,0,1,1])
if output_remainder[0]==0:
    print("Error Free")
else:
    print("There is a error in transporting the data")