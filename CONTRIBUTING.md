# Contributing guidelines

If you have any doubt on the contributing guide, please feel free to state it clearly in an issue.  

New implementations in other languages for existing solutions are welcome.  
Contributions improving the documentation(README.md files) are welcome.  
New questions and topics are also welcome.  


We appreciate any contribution, from fixing a grammar mistake in a comment to implementing complex algorithms.
Please read this section if you are contributing your work.

We want your code to be easily understandable by others, so make sure:
1. You comment your code, with the working of the algorithm
2. Link any reference that helped you with the code, for example, a wikipedia page.
3. Help your reader by using descriptive names that can help you to remove redundant comments.
    - Avoid single letter variable names, unless they live for only a few lines.
    - Avoid acronyms.
3. Avoid taking user inputs. Hardcode a value instead. This is to avoid confusion while running the program.  
For example, avoid
```python
number = int(input()) # Don't do this.
```
instead, do:
```python
number = 10
```
If you can't avoid user input, make sure that the user will have a clear idea of what to give as the input, and is not faced with a blank prompt.  
4. Most importantly, make sure your code works, and do provide an example the shows its working.
