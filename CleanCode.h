// Types

using TSmallNumber = unsigned char;
constexpr TSmallNumber ANGLE_VALUE = 36;
constexpr TSmallNumber DISTANCE = 100;

struct FColor
{
    TSmallNumber R,G,B,A;
};

struct FVector
{
    float X, Y;
};

struct FShapeInfo
{
    float Width = 0.0f;

    float Height = 0.0f;

    float Length = 0.0f;

    FColor Color{0, 0, 0, 0};
};

class Shape
{

public:
    Shape(FShapeInfo NewShapeInfo)
    {
        CurrentShapeInfo = NewShapeInfo;
    }

    void SetPosition(FVector NewPosition) {};

protected:
    FShapeInfo CurrentShapeInfo;

    FVector Position{0.0f, 0.0f};
};

class Box : public Shape { };

class Ball : public Shape { };


// Main

template<typename T = Shape>
void CreateShapes(FShapeInfo ShapeInfo, TSmallNumber Count)
{
    // Something code

    for (int i = 0; i <= Count; i++)
    {
        Shape* ShapeObject = new T(ShapeInfo);
        ShapeObject -> SetPosition(
            FVector{
                (float)(std::cos(ANGLE_VALUE) * i) * DISTANCE,
                (float)(std::sin(ANGLE_VALUE) * i) * DISTANCE
            }
        );

        // Something code
    }

    // Something code
}
