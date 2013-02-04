Overview
========
This is a starter project using jax-rs / jersey.  This particular branch demonstrates using swagger [http://developers.helloreverb.com/swagger/] to document the rest api.

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

note: I've added `deploy.sh` to assist with deploy.  First grant it execute `chmod deploy.sh a+x` then run './deploy.sh'.  This assumes that you are deploying by copying the war to the same place that I am

3) Confirm that it is running by fetching the URL at on webcontainer + /jersey-helloworld/rest/hello.  On my machine:
```
curl localhost:8080/jersey-starterkit/rest/hello
```

Opening in Eclipse
==================
If you use Eclipse, the gradle scripts are nice enough to create your classpath files.

If you have gradle installed, run:
```
gradle eclipseClasspath
```

If you do not have gradle installed, run the gradle wrapper:
```
./g eclipse
```

Now you can import the project into eclipse.

Logging
=======
There is a log4j configuration defined in `src/main/resources/log4j.properties`.  By default this will log to the STDOUT and to a series of log files.  Change the logging configuration as needed.

If you would like to use the default logging, create the logging folders:
```
sudo mkdir /restapi
chmod a+wr /restapi
```
