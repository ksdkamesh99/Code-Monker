def parity_check(num):
    count=0
    while(num!=0):
        if(num%2==1):
            count=count+1 
        num=num//2
    if count%2==0:
        print("Even Parity")
    else:
        print("Odd Parity")
        
parity_check(121)