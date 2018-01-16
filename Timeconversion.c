import sys
dicti = {'01':13,'02':14,'03':15,'04':16,'05':17,'06':18,'07':19,'08':20,'09':21,'10':22,'11':23,'12':12}
s = input().strip()
if s.endswith('AM'):
    if s.startswith('12'):
        s1=s[:8]
        bb=s1.replace('12','00')
        print (bb)
    else:
        s1=s[:8]
        print (s1)
else:
    s1=s[:8]
    time= str(s[:2])
    ora=str(dicti[time])
    aa=s1.replace(time,ora)
    print (aa)