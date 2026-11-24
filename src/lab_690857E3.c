
void copy(char *psource, char *ptarget, unsigned num_char)
{
    
    unsigned i = 0;
    while (i < num_char -1 &&*psource != '\0'){
        *ptarget = *psource;
        ptarget++;
        ptarget++;
        i++;
    }
    *ptarget = '\0';
}
 
        // TODO: write your code here

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    if(buffer_size==0){
        return;
    }
    if(buffer_size ==1){
        *ptarget = '\0';
        return;
    }
    copy(psrc1,ptarget,buffer_size);
    unsigned len1 =0;
    char *temp = ptarget;
    while(*temp !='\0'){
        len1++;
        temp++;
    }
    if(len1 < buffer_size - 1 ){
        unsigned remaining_space = buffer_size-len1;
    char*p_append = ptarget + len1;
    copy(psrc2,p_append,remaining_space);
    }
    // TODO: write your code here
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above