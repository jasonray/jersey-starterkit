Overview
========
This is a starter project using jax-rs / jersey.  I've created this because I often find myself wanting to expirement with something that needs a webservice, and this gives me a starting spot.  Clone or fork and use as needed.

How-to run
==========
1) Compile
The project compiles using gradle.  If you already have gradle installed, compile using:
```
gradle war
```


If you do not have gradle install, you can utilize the gradle wrapper included in the source
```
./g war
```

The war file is compile to: `build/libs/jersey-starterkit.war`


2) Deploy the war file to web container.  I've been using apache-tomcat [http://tomcat.apache.org], and typically copy the war to the tomcat webapps directory.  On my machine:
```
cp build/libs/jersey-starterkit.war /Applications/apache-tomcat-6.0.33/webapps/
```

3) Confirm that it is running by fetching the URL at on webcontainer + /jersey-helloworld/rest/hello.  On my machine:
```
curl localhost:8080/jersey-starterkit/rest/hello
```

Opening in Eclipse
==================
If you use Eclipse, the gradle scripts are nice enough to create your eclipse project and classpath files.

First time only
---------------
If you have gradle installed, run:
```
gradle eclipse
```

If you do not have gradle installed, run the gradle wrapper:
```
./g eclipse
```

Now you can import the project into eclipse.


Updating classpath files
------------------------
If you update dependencies, pull the new libs into your classpath:
```
gradle eclipseClasspath
```

Logging
=======
There is a log4j configuration defined in `src/main/resources/log4j.properties`.  By default this will log to the STDOUT and to a series of log files.  Change the logging configuration as needed.

If you would like to use the default logging, create the logging folders:
```
> sudo mkdir /restapi
> chmod a+wr /restapi
````
