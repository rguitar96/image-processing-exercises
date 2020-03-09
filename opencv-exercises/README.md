<h2>
Dependencies:
</h2>
⋅⋅* C++ 11+
⋅⋅* CMake 2.8+
⋅⋅* OpenCV 3.2+

<h2>
Compile project:
</h2>

To compile the project, first compile each library separately:
~~~~
>> cd exercises-0x/libraries/ImageUtilities/build
>> cmake ..
>> make
~~~~

And then compile the exercises:

~~~~
>> cd ../../../build
>> cmake ..
>> make
~~~~

<h2>
Run exercises:
</h2>

~~~~
>> ./exercise_02a_thresh 100 <input_path> <output_path>
~~~~
