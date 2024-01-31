# Docker
The project has been dockerized for convience. If you have docker installed, build and run the app
using the following:
```
docker build --target=app -t arithmetic-app .
docker run arithmetic-app
```

To build and run the google tests, run the following:
```
docker build --target=tests -t arithmetic-tests .
docker run arithmetic-tests
```