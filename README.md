# testjni4android
android jni开发中，在c代码中调用java代码，需要先反射再调用。 jni4android是bilibili开源的一个工具，自动根据java类生成 .h和.c 的反射文件 这个项目就是一个简单的使用示例。


jni4android 项目地址
----------------
[https://github.com/bilibili/jni4android][1]

**介绍**

由bilibili开源的用于快速开发jni的工具，在ijkplayer中使用。
主要作用是自动生成jni中的 .h 和 .c 文件，并做好了与java类的反射，在jni中调用java类很方便。sdk中java类或自己累都可以~

**注意：这个工具目的是快速建立反射，让c去调用java**
**安装**

    git clone https://github.com/Bilibili/jni4android.git jni4android
    cd jni4android
    
    build dependencies
    you don't have to run this if you have bison 3.x installed
    ./get-deps.sh
    
    ./configure
    make
    
    j4a -c /your/java/path/demo.java

没报错的话就会生成 .h和.c了

*提示： 执行上边命令时 demo.java 中的方法不能写实现，不然会报错，最好将这个类在jni的目录下重写一份，用于执行上边命令* 

**使用**
将生成的  .h 和 .c 已经下面的这两个文件，导入到jni工程里，并添加头文件和源文件进cmakelist

    demo.h
    demo.c
    jni4android/include/j4a/j4a_base.h
    jni4android/include/j4a/j4a_base.c

有上边的这些文件就可以了。

    include "j4a/class/com/example/feng/testjni4android/CallBack/NotifyEvent.h"
    
    // 注册、反射
    J4A_LOAD_CLASS(com_example_feng_testjni4android_CallBack_NotifyEvent);
    
    // 使用
    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent__withCString(env,thiz,100,"hello jni...");

jni4android中还提供了下边几个辅助文件，使用更方便

    j4a_allclasses.h
    j4a_allclasses.c
    j4a_allclasses.loader.h
    j4a_allclasses.include.h
    
​​
只需要   调用  J4A_LoadAll__catchAll（evn） 这一个函数，完成所有类的反射。

​​


  [1]: https://github.com/bilibili/jni4android
