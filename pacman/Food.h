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
	/// 单元格的食物被吃掉
	/// </summary>
	/// <param name="x">横坐标</param>
	/// <param name="y">纵坐标</param>
	/// <returns>被吃掉食物的类型</returns>
	FoodType Eaten(const int x, const int y);

	/// <summary>
	/// 剩余的食物数量
	/// </summary>
	/// <returns></returns>
	int Left();
private:
	int **data;
	int colomn;
	int row;
	int foodNums;
};
