YouTube Video Link--> https://www.youtube.com/watch?v=dtkGWJL14EY
![CI](https://github.com/karol-soup/CIS-25/actions/workflows/Kitchen%20Calculator/Kitchen%20Calculator/.github/workflows/cross-platform-ci.yml/badge.svg?branch=project1-tests)

TESTING INSTRUCTIONS 
--------------------
cmake -- build .
# Run the main application
Debug\main_exec
# Run unit tests
Debug\test_exec

Kitchen Calculator 
---------------------
This c++ program converts common units in cooking such as Cups, Tbsp, Tsp, and FL oz.


USER INPUT  
  - starting amount
  - starting unit
  - desired unit.

My input functions utilize while loops to ensure the input is valid. By using if statements and functions such as cin.fail(), cin.clear(), and cin.ignore, I can check if user input is a double or int, and then I check certain conditions after that. 

CONVERSION

When calling convertUnit I call intoFL, I do this so there is a base unit that makes conversion simpler. 
The program then converts the amount to fluid ounces using if statements. 
To display the conversion I utilize strings, arrays, for loops, and if statements, in order to convert ints to strings and that's how I am able to display the conversion.  


Sources used
------------------
https://en.cppreference.com/w/cpp/header
https://cplusplus.com/forum/beginner/250945/
https://househathaway.com/products/kitchen-measurements-conversion-chart

