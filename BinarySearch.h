int BinarySearch(float arr[], float val)
{
	int size = sizeof(arr) / sizeof(arr[0]); // For whatever reason length wasn't working
	int min = 0;
	int max = size - 1;
	int index = max / 2;

	do {
		if (arr[index] == val)
		{
			return index;
		}

		else
		{
			if (val > arr[index])
			{
				min = index + 1;
				index = (min + max) / 2;
			}

			if (val < arr[index])
			{
				max = index - 1;
				index = (min + max) / 2;
			}
		}
	} while (min <=max);

}