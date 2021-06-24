clc; %clears text from the command window 
clear; %clears all variables from the workspace

% How to use arrays in matlab

% In matlab, you can have both one dimensional and two dimensional arrays

% One Dimensional Arrays
rowArray = [1 2 3 4];
columnArray = [1; 2; 3; 4;];

% To access a particular element in a 1D array, you can use its index
% starting at 1:
position3 = rowArray(3); % position 3 in rowArray is the number 3

% Arrays can also consist of types other than just numbers
% <indices>   1      2      3      4
friends = ["Alice" "Bob" "Carl" "Frank"];
position2 = friends(2); % position 2 in friends is "Bob"

% We can change particular elements in an array as well
friends(2) = "Cameron";
position2 = friends(2); % position 2 in friends is now "Cameron"

% The ":" placed between two numbers can select a range of numbers
last3friends = friends(2:4); % ["Cameron" "Carl" "Frank"]

% Arrays can also be created using the ":" in the form
% startIndex : step : endIndex
zeroToFiftyByFives = 0:5:50; % [0 5 10 15 20 25 30 35 40 45 50]


% Two Dimensional Arrays
oneToSixteen = [1 2 3 4; 5 6 7 8; 9 10 11 12; 13 14 15 16];
moreFriends = ["Alice" "Bob" "Carl" "Frank"; "Joe" "Katy" "Sam" "Tina"];

% To access a particular element in the 2D array, you can use the form
% ArrayName(rowIndex, columnIndex)

element12 = oneToSixteen(3, 4); %third row, fourth column -> 12
friend5 = moreFriends(2, 1); %second row, first column -> "Joe"

% Like before, we can change particular elements
moreFriends(2, 1) = "George"; % replace second row first column ("Joe") with "George"

% We can loop through both 1D and 2D arrays using a for loop
% This loop goes from left to right and moves down after going through a 
% full row.
for row = 1:2 %moreFriends has 2 rows
    for column = 1:4 %and four columns
        disp(moreFriends(row, column)); %display the corresponding position
    end
end


% There's a multitude of helpful built-in functions that are well-
% documented on the mathworks website, but here's a few useful ones:

% size() - gives the size of the array 
moreFriends = ["Alice" "Bob" "Carl" "Frank"; "Joe" "Katy" "Sam" "Tina"];
size(moreFriends); % returns [2 4] since we have 2 rows, 4 columns

% length() - gives the length of largest array dimension
%            (more useful for 1D arrays)
rowArray = [1 2 3 4 5 6];
length(rowArray); % returns 6 since there are 6 elements in rowArray

% sort() - sorts array
unsorted = [0.5 -2 0 1.4 7 -0.2];
sort(unsorted); % returns [-2 -0.2 0 0.5 1.4 7]
