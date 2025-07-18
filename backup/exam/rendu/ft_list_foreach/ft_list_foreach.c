typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr = begin_list;

    while (list_ptr != 0)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}