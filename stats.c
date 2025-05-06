float	average(float *sample, int size)
{
	float	result;
	float	sum = 0;
	int		i;

	while (i < size)
	{
		sum += sample[i];
		i++;
	}
	result = sum / size;
	return (result);
}

