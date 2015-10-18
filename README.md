Objectives
1. To reinforce the use of loops.
2. To learn how to read information from files.

Introduction: Who doesn’t love dragons?
Movies about dragons and dragon training were very popular this summer. Your friend has not stopped talking about how awesome dragons are and how cool it would be to train them. To amuse your friend, you have decided to create a series of programs about dragons.

Problem: Celebration of the First Flight (flight.c)
In previous programs, we helped your dragon learn how to fly and train to improve their flight distance. It’s time for your dragon’s Celebration of the First Flight, similar to a dragon sweet 16. Every day for a month, your dragon is responsible for scheduling demonstration flights with the other members of Dragon Island. Your dragon wants to be presented in the best possible light, so it is up to you to determine the best month for the Celebration.
In this program, you will examine a file of weather data. Ask the user for the name of this file. Then, ask the user for the temperature range that their dragon flies best in. Calculate the percentage of days in each month that fall into that range. A file of weather data may contain multiple years, so calculate the percentage by dividing the number of days in range by the number of days that there is data for.
The month with the highest percentage is the month that the dragon should pick for their Celebration of the First Flight.
Arrays are not required (except for the name of the input file), but may simplify your solution.

Input Specification
1. The lower bound temperature will be an integer between 0 and 80
2. The upper bound temperature will be an integer higher than the lower bound and less than 120
3. The file name will be a string less than 30 characters in length

Input File Specification
The available weather data is presented in four columns per day:
MONTH DAY YEAR TEMPERATURE
The file will end with a -1 on a row by itself.

Output Specification
Output to the screen. Show the user the percentage of days in range for each month. Then, print the best month for the Celebration of the First Flight.
Month X: YY.Y percent of days in range.
I recommend month Z for the Celebration of the First Flight!

Output Sample
Below is a sample output of running the program. Note that this sample is NOT a comprehensive test. You should test your program with different data than is shown here based on the specifications given above. In the sample run below, for clarity and ease of reading, the user input is given in italics while the program output is in bold. (Note: When you actually run your program no bold or italics should appear at all. These are simply used in this description for clarity’s sake.)
The corresponding sample input file is available on the webcourse. You can find more input files at http://academic.udayton.edu/kissock/http/Weather/default.htm, but you will need to add a -1 to the end of the file.
Tell me about your dragon’s preferred temperature for flying:
What is the coldest temperature they can fly in?
60
What is the hottest temperature they can fly in?
80
Please enter the name of the weather data file for Dragon Island.
island.txt
Month 1: 66.1 percent of days in range.
Month 2: 71.4 percent of days in range.
Month 3: 72.6 percent of days in range.
Month 4: 98.3 percent of days in range.
Month 5: 95.2 percent of days in range.
Month 6: 48.3 percent of days in range.
Month 7: 48.41 percent of days in range.
Month 8: 11.3 percent of days in range.
Month 9: 63.3 percent of days in range.
Month 10: 100.00 percent of days in range.
Month 11: 83.3 percent of days in range.
Month 12: 77.4 percent of days in range.
I recommend month 10 for the Celebration of the First Flight!