/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HISeries.h"
#import "HIColor.h"


/**
* description: A windbarb series. If the type option is not
specified, it is inherited from chart.type.
For options that apply to multiple series, it is recommended to add
them to the plotOptions.series options structure.
To apply to all series of this specific type, apply it to plotOptions.
windbarb.
*/
@interface HIWindbarb: HISeries

/**
* description: Whether to group non-stacked columns or to let them render independent
of each other. Non-grouped columns will be laid out individually
and overlap each other.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-grouping-false/ : Grouping disabled
* default: true
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *grouping;
/**
* description: The X axis range that each point is valid for. This determines the
width of the column. On a categorized axis, the range will be 1
by default (one category unit). On linear and datetime axes, the
range will be computed as the distance between the two closest data
points.
The default null means it is computed automatically, but this option
can be used to override the automatic value.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-pointrange/ : Set the point range to one day on a data set with one week between the points
* default: null
*/
@property(nonatomic, readwrite) NSNumber *pointRange;
/**
* description: The minimal height for a column or width for a bar. By default,
0 values are not shown. To visualize a 0 (or close to zero) point,
set the minimal point length to a pixel value like 3. In stacked
column charts, minPointLength might not be respected for tightly
packed values.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-minpointlength/ : Zero base value
https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-minpointlength-pos-and-neg/ : Positive and negative close to zero values
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *minPointLength;
/**
* description: A pixel value specifying a fixed width for each column or bar. When
null, the width is calculated from the pointPadding and
groupPadding.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-pointwidth-20/ : 20px wide columns regardless of chart width or the amount of data points
* default: null
*/
@property(nonatomic, readwrite) NSNumber *pointWidth;
/**
* description: A series specific or series type specific color set to apply instead
of the global colors when colorByPoint is true.
*/
@property(nonatomic, readwrite) NSArray<HIColor *> *colors;
/**
* description: When using automatic point colors pulled from the options.colors
collection, this option determines whether the chart should receive
one color per series or one color per point.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-colorbypoint-false/ : False by default
https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-colorbypoint-true/ : True
* default: false
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *colorByPoint;
/**
* description: The corner radius of the border surrounding each column or bar.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-borderradius/ : Rounded columns
* default: 0
*/
@property(nonatomic, readwrite) NSNumber *borderRadius;
/**
* description: The maximum allowed pixel width for a column, translated to the height
of a bar in a bar chart. This prevents the columns from becoming
too wide when there is a small number of points in the chart.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-maxpointwidth-20/ : Limited to 50
* default: null
*/
@property(nonatomic, readwrite) NSNumber *maxPointWidth;
/**
* description: 3D columns only. The width of the colored edges.
* default: 1
*/
@property(nonatomic, readwrite) NSNumber *edgeWidth;
/**
* description: Vertical offset from the cartesian position, in pixels. The default value
makes sure the symbols don't overlap the X axis when onSeries is
null, and that they don't overlap the linked series when onSeries is
given.
* default: -20
*/
@property(nonatomic, readwrite) NSNumber *yOffset;
/**
* description: Padding between each value groups, in x axis units.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-grouppadding-default/ : 0.2 by default
https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-grouppadding-none/ : No group padding - all columns are evenly spaced
* default: 0.2
*/
@property(nonatomic, readwrite) NSNumber *groupPadding;
/**
* description: Pixel length of the stems.
* default: 20
*/
@property(nonatomic, readwrite) NSNumber *vectorLength;
/**
* description: The spacing between columns on the Z Axis in a 3D chart. Requires
highcharts-3d.js.
* default: 1
*/
@property(nonatomic, readwrite) NSNumber *groupZPadding;
/**
* description: 3D columns only. The color of the edges. Similar to borderColor,
 except it defaults to the same color as the column.
*/
@property(nonatomic, readwrite) HIColor *edgeColor;
/**
* description: When true, each column edge is rounded to its nearest pixel in order
to render sharp on screen. In some cases, when there are a lot of
densely packed columns, this leads to visible difference in column
widths or distance between columns. In these cases, setting crisp
to false may look better, even though each column is rendered
blurry.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-crisp-false/ : Crisp is false
* default: true
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *crisp;
/**
* description: The color of the border surrounding each column or bar.
In styled mode, the border stroke can be set with the .highcharts-point
rule.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-bordercolor/ : Dark gray border
* default: #ffffff
*/
@property(nonatomic, readwrite) HIColor *borderColor;
/**
* description: Depth of the columns in a 3D column chart. Requires highcharts-3d.
js.
* default: 25
*/
@property(nonatomic, readwrite) NSNumber *depth;
/**
* description: The id of another series in the chart that the wind barbs are projected
on. When null, the wind symbols are drawn on the X axis, but offset
up or down by the yOffset setting.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/windbarb-onseries : Projected on area series
*/
@property(nonatomic, readwrite) NSString *onSeries;
/**
* description: Padding between each column or bar, in x axis units.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-pointpadding-default/ : 0.1 by default
https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-pointpadding-025/ : 0.25
https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-pointpadding-none/ : 0 for tightly packed columns
* default: 0.1
*/
@property(nonatomic, readwrite) NSNumber *pointPadding;

-(NSDictionary *)getParams;

@end
