// It is used for larger multiplication

// We are given the miltiplicant numbers into 4 parts 
// for 12* 34 
    // the values are:
    //     a = 1;
    //     b = 2;
    //     c = 3;
    //     d = 4;

    // This example has 4 multip.ication parts:
    //     4*1, 4*2, 3*1, 3*2;

    // for 12 * 34 can be represented as:
    //     (a+b) * (c+d) => ac + ad + bc + bd
    //      ad + bc   = (a + b)(c + d) - ac - bd 
    //      ac + ((a + b) (c + d) - ad - bd) + bd


    

