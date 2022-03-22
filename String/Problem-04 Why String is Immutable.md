# https://www.javatpoint.com/why-string-is-immutable-or-final-in-java#:~:text=The%20String%20is%20immutable%20in,it%20makes%20the%20String%20immutable.  




In object-oriented programming, the immutable string or objects that cannot be modified once it is created.
But we can only change the reference to the object. We restrict to change the object itself. 
The String is immutable in Java because of the security, synchronization and concurrency, caching, and class loading. 
The reason of making string final is to destroy the immutability and to not allow others to extend it.

import java.util.*;  
class ImmutableString{    
    public static void main(String args[]){    
        String NewString = "Hello";    // It is just behave like a constant variable\
        NewString.concat("World");    // It will not get append
        System.out.println(NewString);    
    }    
}    



![immutable_01](https://user-images.githubusercontent.com/61939693/149388015-78aa05d9-b878-45e2-9c19-25aef625bd3d.jpg)



import java.util.*;  
class ImmutableString{    
    public static void main(String args[]){    
        String NewString = "Hello";    
        NewString = NewString.concat("World");  //if we want to append then we need to use new keyword\
        System.out.println(NewString);    
    }    
}    




![immutable_02](https://user-images.githubusercontent.com/61939693/149388215-afe612aa-5a51-4559-b28f-058012dda624.jpg)

