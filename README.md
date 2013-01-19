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
./gradlew war
```

The war file is compile to:
```
build/libs/jersey-starterkit.war
```

2) Deploy the war file to web container.  I've been using apache-tomcat [http://tomcat.apache.org], and typically copy the war to the tomcat webapps directory.  On my machine:
```
cp build/libs/jersey-starterkit.war /Applications/apache-tomcat-6.0.33/webapps/
```

note: I've added `deploy.sh` to assist with deploy.  First grant it execute `chmod deploy.sh a+x` then run './deploy.sh'.  This assumes that you are deploying by copying the war to the same place that I am

3) Confirm that it is running by fetching the URL at on webcontainer + /jersey-helloworld/rest/hello.  On my machine:
```
curl localhost:8080/jersey-helloworld/rest/hello
```

