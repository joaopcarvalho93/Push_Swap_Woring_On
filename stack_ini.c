

// Objectivo criar uma stack com os valores dados no input
// Verificar se: 
// - Existem valores duplicados 
// - Erros de syntax 
// - Over ou untherflow

// usar a flag se for verdadeiro fazer free a AV


void	stack_ini(t_stack **a, char **av, bool flag)
{
	int		i;
	long	n;

	i = 0;
	if (!*av)
		free_errors(a, av, flag);
	
}