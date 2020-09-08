import random
import time

no_frames=random.randint(1,500)
no_frames=no_frames//8
print("No of packets to be transmitted are "+str(no_frames))
frameno=1
delay_acknowledgement=[]
received=[]
while(no_frames>0):
    x=random.randint(1,20)
    print("Sending the data packet for frame "+str(frameno))
    if x%2==0:
        timer=x/10
        delay_acknowledgement.append(frameno)
        print("Waiting for "+str(timer)+" sec")
        time.sleep(1)
        y=random.randint(1,20)
        if y%2==0:
            i=random.randint(0,len(delay_acknowledgement)-1)
            #print(delay_acknowledgement)
            #print(i)
            z=delay_acknowledgement[i]

            if z in received:
                print("Duplicate packet "+str(z)+" received")
                delay_acknowledgement.pop(i)


    else:
        print("Acknowledgement received ")
        received.append(frameno)
        no_frames=no_frames-1
        frameno=frameno+1
print("Finally the data is send successfully ")
