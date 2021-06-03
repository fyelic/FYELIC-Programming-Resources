clc; %clears text from the command window 
clear; %clears all variables from the workspace

% How to use while loops in matlab


% What are while loops?
% While loops are a great tool to repeat a block of code when a condition
% is true. For example, you could use a while loop to keep running a 
% dice rolling simulation until the first 6 is rolled, or to keep
% repeating a program until the user types a quit command.

% This example uses this variable _index_ to loop through and print 5 times
fprintf('Printing the numbers 1-5 with a while loop:\n');
index = 1;
while index <= 5
    disp(index);
    index = index + 1;
end
% So what happened above? Outside of the while loop, we declared index
% to start at 1. At line 16, since 1 <= 5, we entered the loop, displayed
% the index, and incremented the index by 1. We then went back to line 16,
% 2 <= 5, and so on. On the last iteration with index = 5, 5 <= 5 so we 
% displayed and incremented to 6. 6 is not <= 5, so we broke out of the
% loop since our condition was no longer true.

% Okay great, we could've done that with a for loop as well. Let's look
% at another example:

user = "";
%while _user_ is not equal to the string "quit"
while user ~= "quit"
    user = input('Type "quit" to exit the loop. Otherwise we ask again.\n','s');
end
% In the above example, we don't know how many times the user wants to
% repeat. They could type quit instantly, or after 10 times, maybe after
% 20. The while loop allows us to flexibly repeat code despite not knowing
% how many times to repeat it for. 


% Be careful of infinite while loops! You might have a program that never
% breaks the condition of the while loop, causing it to never exit the
% loop. 

% In contrast to the example above, when the index reaches 5, we reset it
% to 1. Since we only increment by 1, we will never be able to skip when we
% reach 5, so we are stuck.
fprintf('Infinite loop!\n');
index = 1;
while index <= 5
    disp(index);
    index = index + 1;
    if index == 5
        index = 1;
    end
    pause(1); %1 second delay added so your command window doesn't go crazy
end

% While loops are very useful for repeating a segment of code when you know
% the condition to stop at, but don't know how many times to repeat it for.
% If you do know exactly how many times to run the code, a for loop might
% be more suitable. 
