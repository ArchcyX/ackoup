typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp;
    t_list *start = lst;

    while (lst->next)
    {
        if (cmp(lst->data, lst->next->data) == 0)
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}