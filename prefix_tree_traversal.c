/* Traverse a prefix tree and print out all subnets which match
 * the input subnet and mask. 
 */
 
 void prefix_tree_traversal(node* root, int val, int mask, int addr) {
    
    if (root == NULL) {
        return;
    }
    
    if (root->valid) {
        printf("%d\n", addr);
    }
    
    int bit = val & (1<<31);
     
     
    if (val & (1<<31) == 0) {
        
        prefix_tree_traversal(root->left, val<<1, mask<<1, 
    
}
        
