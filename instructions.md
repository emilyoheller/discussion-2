# Discussion Section - Week 4

## C++ Review - References

References are used all over C++ and are a very important concept to be familiar with. This includes using references both
for function parameters and for return values from classes.

Below is a class similar to the `Circle` class from the lecture exercices. It includes two different ways of getting the value
for the radius of the circle.

```c++
class Circle
{
   private:
      double radius_;

   public:
      Circle(double r) : radius_(r) {}

      double get_radius_1() { return radius_; }

      double & get_radius_2() { return radius_; }
};
```

Here are a few code snippets. Without trying to compile the code, predict if the code will compile.
If the code compiles, what is the value of `r` (if it exists)
and the internal value of the `radius_` attribute at the end of the snippet? Why do you think that?

After predicting, try writing a program and see if you were correct.

1. ```c++
   Circle c(1.0);
   double r = c.get_radius_1();
   r = 4.0;
   ```

1. ```c++
   Circle c(1.0);
   double r = c.get_radius_2();
   r = 4.0;
   ```
   
1. ```c++
   Circle c(1.0);
   c.get_radius_1() = 2.0;
   ```

1. ```c++
   Circle c(1.0);
   c.get_radius_2() = 2.0;
   ```

1. ```c++
   Circle c(1.0);
   double & r = c.get_radius_1();
   r = 4.0;
   ```

1. ```c++
   Circle c(1.0);
   double & r = c.get_radius_2();
   r = 4.0;
   ```

## Programming Paradigms

Reading: [Overview of Programming Paradigms](https://doi-org.libproxy.berkeley.edu/10.1515/9783110564990-002) (2.1, 2.2, 2.3, 2.4) from "Mathematical Foundations of Data Science Using R".

To complete this discussion session, your group should answer the questions in the README in a markdown file. 

You should then complete the programming tasks.
These tasks are meant to be collaborative, so work together to ensure that all group members understand the code.
Discussions are meant to be completed tonight and should be submitted at the end of discussion section.

After the programming tasks, there are questions about a molecular science library called OpenMM that we will be using in our molecular dynamics lab.

### Discussion Questions

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

### Programming Paradigms: Tasks

For the programming task, you will be writing a few different versions of a factorial. If you need to refresh your memory for a factorial, please read the first part of the [Wikipedia page](https://en.wikipedia.org/wiki/Factorial).

There is pseudo-code for an imperative (2.5) and functional (2.6) version of a factorial in your reading.

For each of these tasks, you should write a C++ program with the name `paradigm_factorial.cpp`, where the word `paradigm` is replaced by the paradigm you are implementing. 

1. `procedural` - Create a procedural version of your factorial by writing a function called `factorial` which returns the result of the factorial calculation.

1. `object oriented` - Write a class for computing factorials. The object should be initialized with a a number and should have a method called `calculate`. The result should be stored in an attribute of the object.

1. **Optional** `functional` - For the functional version of this calculation, you will need to utilize something called **recursion**. 
In recursive functions, functions will call themselves.
 You can see pseudo-code for a functional factorial in 2.6 of the discussion reading.


