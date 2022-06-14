# simple-random-AI
## Work
That just taking random number and inserting in array _aiconditions[]_.


## Using 
### Including
#include "ai.h"  
### Prepare
Open _ai.h_ and change _#define aiarraysize 128_ if you need.  
You can use _using namespace AI;_.  
### Functions
- AI::record(double a, double b, int aiconditions[], int arraypos); - record number beetwen _double a, double b_ in _aiconditions[arraypos]_.
- AI::read(int aiconditions[], int arraypos); - read number from _aiconditions[arraypos]_.
- AI::write(int aiconditions[], int arraypos, int data); - write number (_data_) to _aiconditions[arraypos]_.
- AI::fill(double ax, double bx, int aiconditions[]); - fill _aiconditions[]_ with numbers beetwen _double a, double b_.
- AI::full(int ax, int aiconditions[]); - fill all _aiconditions[]_ with number (_ax_).
- AI::clean(int aiconditions[]); - fill all _aiconditions[]_ with 0.
- AI::mov(int aiconditions[], int pos1, int pos2); - move number from _aiconditions[pos1]_ to _aiconditions[pos2]_.
- AI::swap(int aiconditions[], int pos1, int pos2); - swap _aiconditions[pos1]_ and _aiconditions[pos2]_ numbers.
