void segregate0and1(int arr[], int size)
{
	/* Initialize left and right indexes */
	int left = 0, right = size - 1;

	while (left < right)
	{

		if (arr[left] == 1 && arr[right] == 0) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}

		if (arr[left] != 1) left++;
		if (arr[right] != 0) right--;

	}
}
