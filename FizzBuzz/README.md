# FizzBuzz
This is a vastly overengineered OOP version of FizzBuzz for practice and demonstration
purposes. It practices:
- Small functions
- OOP design for extensibility
- TDD

# Docker
The project has been dockerized for convience. If you have docker installed, build and run the app
using the following:
```
docker build --target=app -t fizzbuzz-app .
docker run fizzbuzz-app
```

To build and run the google tests, run the following:
```
docker build --target=tests -t fizzbuzz-tests .
docker run fizzbuzz-tests
```
