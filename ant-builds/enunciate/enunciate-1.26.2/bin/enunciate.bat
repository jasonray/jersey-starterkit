@echo off

rem Put some effort into finding ENUNCIATE_HOME if not set.  (Copied from ant's batch file).

rem %~dp0 is expanded pathname of the current script under NT
set DEFAULT_ENUNCIATE_HOME=%~dp0..

if "%ENUNCIATE_HOME%"=="" set ENUNCIATE_HOME=%DEFAULT_ENUNCIATE_HOME%
set DEFAULT_ENUNCIATE_HOME=

if "%ENUNCIATE_JAVA_HOME%" == "" set ENUNCIATE_JAVA_HOME=%JAVA_HOME%
if "%ENUNCIATE_JAVA_HOME%" == "" goto noJavaHome
goto enunciate

:noJavaHome
echo ENUNCIATE_JAVA_HOME or JAVA_HOME is set incorrectly or could not be located.  Please set one of these.
goto end

:enunciate
%ENUNCIATE_JAVA_HOME%\bin\java -cp %ENUNCIATE_HOME%\lib\activation-1.1.jar;%ENUNCIATE_HOME%\lib\apt-jelly-core-2.15.jar;%ENUNCIATE_HOME%\lib\apt-jelly-freemarker-2.15.jar;%ENUNCIATE_HOME%\lib\asm-3.1.jar;%ENUNCIATE_HOME%\lib\commons-beanutils-1.8.3.jar;%ENUNCIATE_HOME%\lib\commons-digester-2.1.jar;%ENUNCIATE_HOME%\lib\commons-logging-1.1.1.jar;%ENUNCIATE_HOME%\lib\easymock-2.2.jar;%ENUNCIATE_HOME%\lib\enunciate-c-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-core-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-core-annotations-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-core-rt-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-csharp-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-docs-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-java-client-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-jaxws-ri-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-jaxws-support-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-jersey-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-jersey-rt-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-obj-c-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-ruby-1.26.2.jar;%ENUNCIATE_HOME%\lib\enunciate-xml-1.26.2.jar;%ENUNCIATE_HOME%\lib\freemarker-2.3.14.jar;%ENUNCIATE_HOME%\lib\jackson-core-asl-1.9.3.jar;%ENUNCIATE_HOME%\lib\jackson-jaxrs-1.9.3.jar;%ENUNCIATE_HOME%\lib\jackson-mapper-asl-1.9.3.jar;%ENUNCIATE_HOME%\lib\jackson-xc-1.9.3.jar;%ENUNCIATE_HOME%\lib\jaxb-impl-2.2.3.jar;%ENUNCIATE_HOME%\lib\jdom-1.1.2.jar;%ENUNCIATE_HOME%\lib\jersey-core-1.11.jar;%ENUNCIATE_HOME%\lib\jersey-server-1.11.jar;%ENUNCIATE_HOME%\lib\jersey-servlet-1.11.jar;%ENUNCIATE_HOME%\lib\jsr250-api-1.0.jar;%ENUNCIATE_HOME%\lib\jsr311-api-1.1.1.jar;%ENUNCIATE_HOME%\lib\junit-3.8.1.jar;%ENUNCIATE_HOME%\lib\mail-1.4.4.jar;%ENUNCIATE_HOME%\lib\servlet-api-2.3.jar;%ENUNCIATE_JAVA_HOME%\lib\tools.jar org.codehaus.enunciate.main.Main %*

:end