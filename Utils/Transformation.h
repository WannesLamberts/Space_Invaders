//
// Created by wannes on 14.12.19.
//

#ifndef SPACE_INVADERS_TRANSFORMATION_H
#define SPACE_INVADERS_TRANSFORMATION_H
namespace Utils {

class Transformation
{
public:
        /**
         * \brief This is the only way to get a pointer to the Transformation object and there can only exist 1 object of Transformation;
         * @return the pointer to the Transformation object
         */
        static Transformation* getInstance();

private:
        /**
         * \brief constructor is made private so it can't be called
         */
        Transformation();
        /**
         * \brief copy constructor is made private so it can't be called
         */
        Transformation(Transformation const&);
        /**
         * \brief Copy assignemmt is made private so it can't be called
         */
        Transformation& operator=(Transformation const&);
        /**
         * \brief the pointer to the only Transformation object
         */
        static Transformation* i;
};
} // namespace Utils
#endif // SPACE_INVADERS_TRANSFORMATION_H
