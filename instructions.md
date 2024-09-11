# Discussion Section - Week 4

Reading: [Overview of Programming Paradigms](https://doi-org.libproxy.berkeley.edu/10.1515/9783110564990-002) (2.1, 2.2, 2.3, 2.4) from "Mathematical Foundations of Data Science Using R".

To complete this discussion session, your group should answer the questions in the README in a markdown file. 

You should then complete the programming tasks.
These tasks are meant to be collaborative, so work together to ensure that all group members understand the code.
Discussions are meant to be completed tonight and should be submitted at the end of discussion section.

After the programming tasks, there are questions about a molecular science library called OpenMM that we will be using in our molecular dynamics lab.

## Discussion Questions

1. What are the characteristics of an imperative programming style or language? 
Write this in your own words, rather than copying text from the reading.

1. What key features distinguishes imperative programming and functional programming? 
How are variables different in functional vs. imperative programming?
   
1. Summarize the key features of each of the following programming paradigms: 
   - Procedural
   - Object-Oriented
   - Functional

1. Do the members of your group have a preference for programming paradigm? 
What paradigm or paradigms does everyone have experience with? 
What programming paradigm did you program with when you started?

## Programming Paradigms: Tasks

For the programming task, you will be writing a few different versions of a factorial. If you need to refresh your memory for a factorial, please read the first part of the [Wikipedia page](https://en.wikipedia.org/wiki/Factorial).

There is pseudo-code for an imperative (2.5) and functional (2.6) version of a factorial in your reading.

For each of these tasks, you should write a C++ program with the name `paradigm_factorial.cpp`, where the word `paradigm` is replaced by the paradigm you are implementing. 

1. `procedural` - Create a procedural version of your factorial by writing a function called `factorial` which returns the result of the factorial calculation.

1. `object oriented` - Write a class for computing factorials. The object should be initialized with a a number and should have a method called `calculate`. The result should be stored in an attribute of the object.

1. **Optional** `functional` - For the functional version of this calculation, you will need to utilize something called **recursion**. 
In recursive functions, functions will call themselves.
 You can see pseudo-code for a functional factorial in 2.6 of the discussion reading.

## Object-Oriented Programming: Introduction to OpenMM
Tomorrow, we will be working with a molecular science library called [OpenMM](https://github.com/openmm/openmm) for our lab. 
OpenMM heavily uses an object-oriented paradigm. We will see this tomorrow in our lab.
View the OpenMM repository (linked above) and answer the following questions.

1. What language or languages is OpenMM written in? Why do you think this is?
2. Read the C++ [harmonic bond class](https://github.com/openmm/openmm/blob/a97bbeb40f60acefebb8a6feb0e2522c758d0db0/openmmapi/include/openmm/HarmonicBondForce.h#L50) in OpenMM. Using what you have learned about C++ classes already, explain the attributes and methods present in the class. Identify the construtor. Identify public and private variables and methods. What does this class represent? Is there anything in the class that you don't understand? We will discuss this as a class.
3. Read the Python [topology class](https://github.com/openmm/openmm/blob/e2453f5ec1fc1fd7916e0b398033c3e9ed341877/wrappers/python/openmm/app/topology.py#L70) and perform the same exercise. Using what you have learned about Python classes, identify different aspects of the class. Where is the constructor defined and wht does it do? What are the class attributes and methods? Is there anything in the class that you don't understand? We will discuss this as a class.


