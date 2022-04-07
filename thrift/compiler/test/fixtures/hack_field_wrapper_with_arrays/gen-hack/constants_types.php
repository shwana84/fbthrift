<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * Company
 */
enum Company: int {
  FACEBOOK = 0;
  WHATSAPP = 1;
  OCULUS = 2;
  INSTAGRAM = 3;
}

class Company_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "constants.Company",
        "elements" => dict[
          0 => "FACEBOOK",
          1 => "WHATSAPP",
          2 => "OCULUS",
          3 => "INSTAGRAM",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
        'FACEBOOK' => dict[
          'AnnotationStruct' => AnnotationStruct::fromShape(
            shape(
            )
          ),
        ],
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * Internship
 */
class Internship implements \IThriftAsyncStruct, \IThriftShapishAsyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'weeks',
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'title',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'employer',
      'type' => \TType::I32,
      'enum' => Company::class,
    ),
    4 => shape(
      'var' => 'compensation',
      'is_wrapped' => true,
      'type' => \TType::DOUBLE,
    ),
    5 => shape(
      'var' => 'school',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'weeks' => 1,
    'title' => 2,
    'employer' => 3,
    'compensation' => 4,
    'school' => 5,
  ];

  const type TConstructorShape = shape(
    ?'weeks' => ?int,
    ?'title' => ?string,
    ?'employer' => ?Company,
    ?'compensation' => ?float,
    ?'school' => ?string,
  );

  const type TShape = shape(
    'weeks' => int,
    'title' => string,
    ?'employer' => ?Company,
    ?'compensation' => ?float,
    ?'school' => ?string,
  );
  const int STRUCTURAL_ID = 5601694484190969969;
  /**
   * Original thrift field:-
   * 1: i32 weeks
   */
  public int $weeks;
  /**
   * Original thrift field:-
   * 2: string title
   */
  public string $title;
  /**
   * Original thrift field:-
   * 3: enum constants.Company employer
   */
  public ?Company $employer;
  /**
   * Original thrift field:-
   * 4: double compensation
   */
  private ?\MyFieldWrapper<?float, Internship> $compensation;

  public function get_compensation()[]: \MyFieldWrapper<?float, Internship> {
    return $this->compensation as nonnull;
  }

  /**
   * Original thrift field:-
   * 5: string school
   */
  public ?string $school;

  public function __construct()[] {
    $this->weeks = 0;
    $this->title = '';
    $this->compensation = \MyFieldWrapper::fromThrift_DO_NOT_USE_THRIFT_INTERNAL<?float, Internship>(null, 4, $this);
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static async function genFromShape(self::TConstructorShape $shape): Awaitable<this> {
    $obj = new static();
    $weeks = Shapes::idx($shape, 'weeks');
    if ($weeks !== null) {
      $obj->weeks = $weeks;
    }
    $title = Shapes::idx($shape, 'title');
    if ($title !== null) {
      $obj->title = $title;
    }
    $employer = Shapes::idx($shape, 'employer');
    if ($employer !== null) {
      $obj->employer = $employer;
    }
    $compensation = Shapes::idx($shape, 'compensation');
    if ($compensation !== null) {
      await $obj->get_compensation()->genWrap($compensation);
    }
    $school = Shapes::idx($shape, 'school');
    if ($school !== null) {
      $obj->school = $school;
    }
    return $obj;
  }

  public static async function genFromMap_DEPRECATED(@KeyedContainer<string, mixed> $map): Awaitable<this> {
    $obj = new static();
    $weeks = idx($map, 'weeks');
    if ($weeks !== null) {
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      $obj->weeks = $weeks;
    }
    $title = idx($map, 'title');
    if ($title !== null) {
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      $obj->title = $title;
    }
    $employer = idx($map, 'employer');
    if ($employer !== null) {
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      $obj->employer = $employer;
    }
    $compensation = idx($map, 'compensation');
    if ($compensation !== null) {
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      await $obj->get_compensation()->genWrap($compensation);
    }
    $school = idx($map, 'school');
    if ($school !== null) {
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      $obj->school = $school;
    }
    return $obj;
  }

  public function getName()[]: string {
    return 'Internship';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "constants.Internship",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "weeks",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "title",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "constants.Company",
                    )
                  ),
                )
              ),
              "name" => "employer",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "compensation",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "school",
              "is_optional" => true,
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'compensation' => shape(
          'field' => dict[
            'AnnotationStruct' => AnnotationStruct::fromShape(
              shape(
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function __stringifyMapKeys<T>(dict<arraykey, T> $m)[]: dict<string, T> {
    return Dict\map_keys($m, $key ==> (string)$key);
  }

  public static async function __genFromShape(self::TShape $shape): Awaitable<this> {
    $obj = new static();
    $obj->weeks = $shape['weeks'];
    $obj->title = $shape['title'];
    $employer = Shapes::idx($shape, 'employer');
    if ($employer !== null) {
      $obj->employer = $employer;
    }
    $compensation = Shapes::idx($shape, 'compensation');
    if ($compensation !== null) {
      await $obj->get_compensation()->genWrap($compensation);
    }
    $school = Shapes::idx($shape, 'school');
    if ($school !== null) {
      $obj->school = $school;
    }
    return $obj;
  }

  public async function __genToShape(): Awaitable<self::TShape> {
    $compensation = await ($this->compensation as nonnull)->genUnwrap();
    return shape(
      'weeks' => $this->weeks,
      'title' => $this->title,
      'employer' => $this->employer,
      'compensation' => $compensation,
      'school' => $this->school,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'weeks') !== null) {
      $_tmp0 = (int)/* HH_FIXME[4110] */ $parsed['weeks'];
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->weeks = (int)$_tmp0;
      }
    } else {
      throw new \TProtocolException("Required field weeks cannot be found.");
    }    
    if (idx($parsed, 'title') !== null) {
      $this->title = /* HH_FIXME[4110] */ $parsed['title'];
    }    
    if (idx($parsed, 'employer') !== null) {
      $this->employer = Company::coerce(/* HH_FIXME[4110] */ $parsed['employer']);    }    
    if (idx($parsed, 'compensation') !== null) {
      $this->compensation = /* HH_FIXME[4110] */ $parsed['compensation'];
    }    
    if (idx($parsed, 'school') !== null) {
      $this->school = /* HH_FIXME[4110] */ $parsed['school'];
    }    
  }

}

/**
 * Original thrift struct:-
 * SWE
 */
class SWE implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'employer',
      'type' => \TType::I32,
      'enum' => Company::class,
    ),
    2 => shape(
      'var' => 'compensation',
      'type' => \TType::DOUBLE,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'employer' => 1,
    'compensation' => 2,
  ];

  const type TConstructorShape = shape(
    ?'employer' => ?Company,
    ?'compensation' => ?float,
  );

  const type TShape = shape(
    ?'employer' => ?Company,
    ?'compensation' => ?float,
  );
  const int STRUCTURAL_ID = 1922683334218183646;
  /**
   * Original thrift field:-
   * 1: enum constants.Company employer
   */
  public ?Company $employer;
  /**
   * Original thrift field:-
   * 2: double compensation
   */
  public ?float $compensation;

  public function __construct(?Company $employer = null, ?float $compensation = null  )[] {
    $this->employer = $employer;
    $this->compensation = $compensation;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'employer'),
      Shapes::idx($shape, 'compensation'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'employer'),
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'compensation'),
    );
  }

  public function getName()[]: string {
    return 'SWE';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "constants.SWE",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "constants.Company",
                    )
                  ),
                )
              ),
              "name" => "employer",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "compensation",
              "is_optional" => true,
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __stringifyMapKeys<T>(dict<arraykey, T> $m)[]: dict<string, T> {
    return Dict\map_keys($m, $key ==> (string)$key);
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'employer'),
      Shapes::idx($shape, 'compensation'),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'employer' => $this->employer,
      'compensation' => $this->compensation,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'employer') !== null) {
      $this->employer = Company::coerce(/* HH_FIXME[4110] */ $parsed['employer']);    }    
    if (idx($parsed, 'compensation') !== null) {
      $this->compensation = /* HH_FIXME[4110] */ $parsed['compensation'];
    }    
  }

}

