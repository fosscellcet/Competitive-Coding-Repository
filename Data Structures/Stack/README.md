

# Algorithm

## Push(ITEM)

1.  IF TOP = MAX   then \
    Print “Stack is Full..!!”; \
    Exit;

1.  Otherwise \
    TOP: = TOP + 1; \
    STACK (TOP):= ITEM;

1.  End of IF

1.  Exit;

Returns: None

## Pop

1.  IF TOP = 0 then \
    Print “Stack is empty..!!”; \
    Exit;

1.  Otherwise\
    TOP:= TOP – 1;\
    ITEM: = STACK (TOP);\
    Print ITEM "is popped..!!"\
    RETURN ITEM

1.  End of IF

1.  Exit;

Returns: ITEM(popped value)

## Display

1.  COUNTER = 0

1.  WHILE COUNTER < TOP 

1.  Print STACK(COUNTER);\
    COUNTER := COUNTER + 1;

1.  End of WHILE

1.  Exit;


# Output Overview

![Output Stack](https://www.lucidchart.com/publicSegments/view/62bce614-47f1-4fdf-acf6-9146e32c712b/image.png)