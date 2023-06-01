#linear probing
import array as hashtable
size=10;
hashtable=hashtable.array('i',[-1]*size)
def initialize():
    display();

def display():
    for i in range(0,size):
        print("index [",i,"]= ",hashtable[i])

#fun with argument
def insert(num):
  key=num%size
  if(hashtable[key]==-1):
    hashtable[key]=num;
    #print(hashtable[key])
  else:
    print("colllision is occured at index",key)
    cnt=0;
    for i in range(0,size):
      #print(hashtable[i])
      if(hashtable[i]!=-1):
        cnt+=1
    if(cnt==size):
      print("Hash Table is Full")
    #display()
    #Liniear probing
    else:
      for j in range(0,size):
        key1=(i+1)%size;
        if(hashtable[key1]==-1):
            hashtable[key1]=num;
            break;

def search(searchno):
  for i in range(0,size):
    if(hashtable[i]==searchno):
      print("Number is found")  
      break 
  else:
    print("not Found")


def Delete(delno):
  key=num%size
  for i in range(0,size):
     if(hashtable[i]==delno):
         hashtable[i]=-1
         print("number is deleted")
     
initialize();
while True:
  print("1)Insert\n2)Display\n3)Search\n4)Delete\n5)Exit\n")
  ch=int(input("Enter your choice:"))
  if ch==1:
    op=1
    while(op):
      num=int(input('Enter the number'))
      insert(num)
      op=int(input('Enter the number o for exit or Enter 1 for more accept...'))
  elif ch==2:
    print("****HashTable***")
    display()
  elif ch==3:
    searchno=int(input("Enter the number for search:"))
    search(searchno)
  elif ch==4:
    searchnodel=int(input("Enter the number for Delete Hashing:"))
    Delete(searchnodel)
  else:
    break



#Qudratic Probing
from IPython.core.interactiveshell import sphinxify
import array as hashtable
size=10;
hashtable=hashtable.array('i',[-1]*size)
def initialize():
    display();

def display():
    for i in range(0,size):
        print("index [",i,"]= ",hashtable[i])

#fun with argument
def insert(num):
  key=num%size
  if(hashtable[key]==-1):
    hashtable[key]=num;
    #print(hashtable[key])
  else:
    print("colllision is occured at index",key)
    cnt=0;
    for i in range(0,size):
      #print(hashtable[i])
      if(hashtable[i]!=-1):
        cnt+=1
    if(cnt==size):
      print("Hash Table is Full")
    #display()
    #Qudratic probing
    else:
      for j in range(0,size):
        key1=(key+(j*j))%size;
        if(hashtable[key1]==-1):
            hashtable[key1]=num;
            break;

def search(searchno):
  for i in range(0,size):
    if(hashtable[i]==searchno):
      print("Number is found")  
      break 
  else:
    print("not Found")


def Delete(delno):
  key=num%size
  for i in range(0,size):
     if(hashtable[i]==delno):
         hashtable[i]=-1
         print("number is deleted")
     
initialize();
while True:
  print("1)Insert\n2)Display\n3)Search\n4)Delete\n5)Exit\n")
  ch=int(input("Enter your choice:"))
  if ch==1:
    op=1
    while(op):
      num=int(input('Enter the number'))
      insert(num)
      op=int(input('Enter the number o for exit or Enter 1 for more accept...'))
  elif ch==2:
    print("****HashTable***")
    display()
  elif ch==3:
    searchno=int(input("Enter the number for search:"))
    search(searchno)
  elif ch==4:
    searchnodel=int(input("Enter the number for Delete Hashing:"))
    Delete(searchnodel)
  else:
    break





#Double Hashing
from IPython.core.interactiveshell import sphinxify
import array as hashtable
size=11;
hashtable=hashtable.array('i',[-1]*size)
def initialize():
    display();

def display():
    for i in range(0,size):
        print("index [",i,"]= ",hashtable[i])

#fun with argument
def insert(num,double_hashval):
  key=num%size
  if(hashtable[key]==-1):
    hashtable[key]=num;
    #print(hashtable[key])
  else:
    print("colllision is occured at index",key)
    cnt=0;
    for i in range(0,size):
      #print(hashtable[i])
      if(hashtable[i]!=-1):
        cnt+=1
    if(cnt==size):
      print("Hash Table is Full")
    #display()
        new_key=key
        while hashtable[new_key] is not -1:
          steps=double_hashval-(hashtable[key] % double_hashval)
          new_key=(new_key+steps)%size
        hashtable[new_key]=hashtable[key]
    return hashtable

        


def search(searchno):
  for i in range(0,size):
    if(hashtable[i]==searchno):
      print("Number is found")  
      break 
  else:
    print("not Found")


def Delete(delno):
  key=num%size
  for i in range(0,size):
     if(hashtable[i]==delno):
         hashtable[i]=-1
         print("number is deleted")
     
initialize();
while True:
  print("1)Insert\n2)Display\n3)Search\n4)Delete\n5)Exit\n")
  ch=int(input("Enter your choice:"))
  if ch==1:
    op=1
    while(op):
      num=int(input('Enter the number'))
      insert(num,5)
      op=int(input('Enter the number 0 for exit or Enter 1 for more accept...'))
  elif ch==2:
    print("****HashTable***")
    display()
  elif ch==3:
    searchno=int(input("Enter the number for search:"))
    search(searchno)
  elif ch==4:
    searchnodel=int(input("Enter the number for Delete Hashing:"))
    Delete(searchnodel)
  else:
    break
