# FizzBuzz
This is a vastly overengineered OOP version of FizzBuzz for practice and demonstration
purposes. It practices:
- Small functions
- OOP design for extensibility
- TDD

Attempted extending to stage 2 requirements and misunderstood what should happen. I thought the
algorithm should print Fizz or Buzz if either of the conditions were true, but still only print
once. The actual requirement is that it will print Fizz or Buzz each time one of the requirements
is met.

The updated implementation is with my incorrect understanding in mind. I've created the ability
for a user of the FizzBuzz class to provide a custom matcher function for either of the strings.
I've decided not to extend this further to incorporate the correct interpretation of the
requirements. If I did, I would probably try to construct a list of matchers the user could add to,
and check each one, printing Fizz or Buzz for each one.

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
