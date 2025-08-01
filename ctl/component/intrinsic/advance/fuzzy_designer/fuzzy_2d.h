// GMP fizzy header generator.
// 
// This file is generated by fuzzy controller header generator.
// This file should not be changed you should run `generate_header_file` script to get this file.
// This file may prvide a variable name given by the script parameter.

#ifndef _FILE_FUZZY_2D_H_
#define _FILE_FUZZY_2D_H_


#ifdef __cplusplus
extern"C"
{
#endif // __cplusplus


// Here's the fuzzy matrix declaration.
extern ctrl_gt fuzzy_matrix [21][21];

extern ctrl_gt fuzzy_matrix_segment1[21];

extern ctrl_gt fuzzy_matrix_segment2[21];

// Here's the fuzzy calculate function definition.
GMP_STATIC_INLINE
ctrl_gt ctl_step_fuzzy_matrix(ctrl_gt input1, ctrl_gt input2)
{
    size_gt i = 0, j = 0;

    for(i = 0; i < 21; ++i)
    {
        if(input2 < fuzzy_matrix_segment2[0])
        {
            
        }

        for(j = 0; j < 21; ++j)
        {
            
        }
    }

    return fuzzy_matrix[i][j];
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _FILE_FUZZY_2D_H_

