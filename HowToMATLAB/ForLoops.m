clc; %clears text from the command window 
clear; %clears all variables from the workspace

% How to use for loops in matlab


% What are for loops? 
% For loops are a great tool to repeat a block of code
% for a specific number of times. For example, you could use a for loop if
% you wanted to simulate a dice roll 10 times, or to multiply every data
% entry in an array by 1.5.

% This example uses this variable _index_ to loop through and print 5 times
fprintf('Printing the numbers 1-5 with a for loop:\n');
for index = 1:5
    disp(index);
end
% So what happened above? We started this loop with index = 1. Then we
% used disp(index) to do disp(1), displaying 1 to the command window. 
% That was the end of that iteration, so went back to line 15 but with
% index = 2 now. Again, we displayed 2, then went back to line 15. We
% repeated until index = 5, we displayed the index, then we completed the
% loop since we only instructed the index to go from 1 to 5. 


% We could alternatively write the above as
fprintf('Alternatively...\n');
for index = [1 2 3 4 5]
    disp(index);
end
% since 1:5, if you type in the command window, gives [1 2 3 4 5]


% Well if we can do it like shown above, say we have this array of data
% representing the final averages of students in calc.
fprintf('Final averages (1 decimal):\n');
scores = [98.0 80.5 82.2 77 90 91.9 90];

%for each singular score in the scores array
for singleScore = scores
    %this line replaces "%.1f"
    %with the _singleScore_ for that loop iteration formatted to
    %1 decimal point (".1") using fixed-point notation ("f")
    fprintf('%.1f \n', singleScore);
end

% We could also iterate using the indices for the scores array
fprintf('Final averages (0 decimal):\n');
for scoreIndex = 1:length(scores)
    %here, we take the scoreIndex, which can be a value from 1 to the
    %length of the scores array, and we access that element from scores
    fprintf('%.0f \n', scores(scoreIndex)); 
end


% Let's print a list of siblings by adding their last names when we print
fprintf('The Smith siblings:\n');
firstNames = ["Alice" "Bob" "Christine" "Dan"];

%for each _firstName_ in the firstNames array
for firstName = firstNames
    %set _fullName_ to the _firstName_ with "Smith" at the end
    fullName = firstName + " Smith";
    %print out the string ("%s") for the full name
    fprintf('%s \n', fullName);
end


% For instructional purposes, we printed in each of these for loops, but
% you can do anything inside, whether that be a repeated calculation, or
% running a game for a specified number of times, etc. 

% You can also create for loops that will decrement (go in descending 
% order), start at a value other than 1 (like a loop from 10 to 17), 
% increment in steps that aren't 1 (like a loop from 1 to 2 but increases
% by 0.1 each time), etc. 

% If instead we don't know how many times to run the code, a while loop
% might be more suitable. Some examples would be if we wanted to keep
% reading a file of decreasing data points up until we hit the first
% negative entry, or keep running a game until the user selects 'quit'.

