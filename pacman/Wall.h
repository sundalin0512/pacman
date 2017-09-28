#pragma once
class Wall
{
public:
	Wall();
	~Wall();

	void Generate(const int row, const int colomn);

	int const* const* GetData(int &row, int &colomn) const
	{
		row = this->row;
		colomn = this->colomn;
		return this->data;
	}

private:
	int **data;
	int colomn;
	int row;
};

