#pragma once
enum class FoodType
{
	Simple,
	Super
};

class Food
{
public:
	Food();
	~Food();

	void Generate(int **emptyPlace, const int row, const int colomn);

	/// <summary>
	/// ��Ԫ���ʳ�ﱻ�Ե�
	/// </summary>
	/// <param name="x">������</param>
	/// <param name="y">������</param>
	/// <returns>���Ե�ʳ�������</returns>
	FoodType Eaten(const int x, const int y);

	/// <summary>
	/// ʣ���ʳ������
	/// </summary>
	/// <returns></returns>
	int Left();
private:
	int **data;
	int colomn;
	int row;
	int foodNums;
};
